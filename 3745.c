void fun()
{
  int entity_2 = 15;
  char* entity_4;
  char* entity_0;
  char entity_5 = 'a';
  char entity_8[74] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[66-1]='';
  memset(entity_8, 'N', 74-1);
  entity_8[74-1]='';
  entity_2 = 94;
  strcpy(entity_0, entity_8);
}