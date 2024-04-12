void fun()
{
  char* entity_1;
  char entity_7[90] = "";
  memset(entity_7, 'z', 90-1);
  entity_7[90-1]='0';
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, 90*sizeof(char));
}