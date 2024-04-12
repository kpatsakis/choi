void fun()
{
  int entity_6 = 4;
  char* entity_2;
  char entity_7[86] = "";
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'N', 86-1);
  entity_7[86-1]='0';
  memcpy(entity_2, entity_7, 86*sizeof(char));
}