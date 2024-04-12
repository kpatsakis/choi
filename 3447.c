void fun()
{
  int entity_2 = 91;
  char entity_8[85] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'Y', 85-1);
  entity_8[85-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  memcpy(entity_0, entity_8, 85*sizeof(char));
}