void fun()
{
  int entity_1 = 8;
  char entity_8[96] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_3 = 'A';
  memset(entity_8, 'O', 96-1);
  entity_8[96-1]='';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  memcpy(entity_6, entity_8, 96*sizeof(char));
}