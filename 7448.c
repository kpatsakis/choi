void fun()
{
  int entity_9 = 65;
  int entity_1 = 24;
  entity_1 = 94;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_5;
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[80-1]='';
  entity_7 = (char*)malloc(0*sizeof(char));
  entity_7[0-1]='';
  memset(entity_2, 'r', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[11] = 'Z';
}