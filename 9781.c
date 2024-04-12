void fun()
{
  int entity_4 = 24;
  char* entity_2;
  char* entity_3;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[23-1]='';
  entity_2 = (char*)malloc(5*sizeof(char));
  entity_2[5-1]='';
  memset(entity_9, 'k', entity_4-1);
  entity_9[entity_4-1]='';
  memcpy(entity_6, entity_9, entity_4*sizeof(char));
}