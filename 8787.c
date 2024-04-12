void fun()
{
  int entity_2 = 66;
  entity_2 = 15;
  char* entity_4;
  char* entity_5;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[93-1]='';
  memset(entity_9, 'i', entity_2-1);
  entity_9[entity_2-1]='';
  entity_4 = (char*)malloc(34*sizeof(char));
  entity_4[34-1]='';
  entity_9[100] = 'c';
}