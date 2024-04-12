void fun()
{
  int entity_3 = 56;
  char entity_6[16] = "";
  char* entity_8;
  memset(entity_6, 'w', 16-1);
  entity_6[16-1]='0';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  entity_3 = 60;
  strcpy(entity_8, entity_6);
}