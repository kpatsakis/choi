void fun()
{
  int entity_8 = 5;
  char* entity_2;
  char* entity_7;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(38*sizeof(char));
  entity_7[38-1]='';
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  memset(entity_0, 'y', entity_8-1);
  entity_0[entity_8-1]='';
  strcpy(entity_2, entity_0);
}