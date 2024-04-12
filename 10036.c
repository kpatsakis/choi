void fun()
{
  char entity_8[33] = "";
  char entity_6[82] = "";
  char* entity_9;
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'q', 82-1);
  entity_6[82-1]='0';
  memset(entity_8, 'w', 33-1);
  entity_8[33-1]='0';
  entity_8[72] = 'P';
}