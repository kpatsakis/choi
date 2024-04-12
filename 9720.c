void fun()
{
  int entity_2 = 92;
  int entity_4 = 90;
  char entity_3[8] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_0 = 'M';
  memset(entity_3, 'P', 8-1);
  entity_3[8-1]='';
  entity_5 = (char*)malloc(27*sizeof(char));
  entity_5[27-1]='';
  memcpy(entity_5, entity_3, 8*sizeof(char));
}