void fun()
{
  int entity_2 = 65;
  int entity_1 = 73;
  entity_2 = 65;
  char* entity_0;
  char* entity_3;
  char* entity_6;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[4-1]='';
  memset(entity_7, 'W', entity_2-1);
  entity_7[entity_2-1]='';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[30-1]='';
  strcpy(entity_0, entity_7);
}