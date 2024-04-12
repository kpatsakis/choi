void fun()
{
  int entity_1 = 38;
  int entity_8 = 90;
  entity_8 = 36;
  char entity_0[4] = "";
  entity_0 = NULL;
  char* entity_3;
  char* entity_2;
  entity_3 = (char*)malloc(94*sizeof(char));
  entity_3[94-1]='';
  memset(entity_0, 'l', 4-1);
  entity_0[4-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  strcpy(entity_2, entity_0);
}