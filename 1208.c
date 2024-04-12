void fun()
{
  int entity_8 = 45;
  char entity_6[53] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'A', 53-1);
  entity_6[53-1]='';
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[40-1]='';
  memcpy(entity_4, entity_6, 53*sizeof(char));
}