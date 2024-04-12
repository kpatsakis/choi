void fun()
{
  int entity_4 = 4;
  entity_4 = 58;
  char entity_8[50] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'I', 50-1);
  entity_8[50-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_8, 50*sizeof(char));
}