void fun()
{
  int entity_1 = 32;
  entity_1 = 44;
  char* entity_0;
  char* entity_3;
  char entity_5[38] = "";
  entity_5 = NULL;
  memset(entity_5, 'e', 38-1);
  entity_5[38-1]='';
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[3-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  strcpy(entity_0, entity_5);
}