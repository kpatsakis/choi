void fun()
{
  int entity_2 = 70;
  char entity_7 = 'a';
  char entity_3[23] = "";
  char* entity_6;
  memset(entity_3, 'g', 23-1);
  entity_3[23-1]='0';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_3, 23*sizeof(char));
}