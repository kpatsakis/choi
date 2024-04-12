void fun()
{
  int entity_8 = 78;
  char* entity_6;
  char entity_3[34] = "";
  memset(entity_3, 'S', 34-1);
  entity_3[34-1]='0';
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}