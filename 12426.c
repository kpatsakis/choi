void fun()
{
  int entity_4 = 6;
  char entity_6[57] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'S', 57-1);
  entity_6[57-1]='0';
  strcpy(entity_7, entity_6);
}