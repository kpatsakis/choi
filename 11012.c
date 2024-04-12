void fun()
{
  char entity_2[86] = "";
  char* entity_3;
  memset(entity_2, 'r', 86-1);
  entity_2[86-1]='0';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, 86*sizeof(char));
}