void fun()
{
  int entity_8 = 43;
  char entity_1 = 'a';
  char* entity_6;
  char entity_2[50] = "";
  entity_2 = NULL;
  memset(entity_2, 'P', 50-1);
  entity_2[50-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_2, 50*sizeof(char));
}