void fun()
{
  char entity_2[86] = "";
  char entity_9[99] = "";
  char* entity_7;
  memset(entity_9, 'u', 99-1);
  entity_9[99-1]='0';
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'C', 86-1);
  entity_2[86-1]='0';
  memcpy(entity_7, entity_2, 86*sizeof(char));
}