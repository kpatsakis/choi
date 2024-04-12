void fun()
{
  int entity_5 = 57;
  char entity_8[96] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  memset(entity_8, 'W', 96-1);
  entity_8[96-1]='';
  memcpy(entity_3, entity_8, 96*sizeof(char));
}