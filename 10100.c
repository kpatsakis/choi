void fun()
{
  char* entity_8;
  char entity_9[48] = "";
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'r', 48-1);
  entity_9[48-1]='0';
  entity_9[50] = 'b';
}