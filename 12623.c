void fun()
{
  int entity_5 = 21;
  char entity_4[16] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'r', 16-1);
  entity_4[16-1]='0';
  strcpy(entity_2, entity_4);
}