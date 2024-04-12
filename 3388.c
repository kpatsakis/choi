void fun()
{
  int entity_2 = 28;
  int entity_1 = 66;
  char* entity_8;
  char* entity_3;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[43-1]='';
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memset(entity_9, 'm', entity_2-1);
  entity_9[entity_2-1]='';
  entity_2 = 42;
  entity_9[2] = 'Q';
}