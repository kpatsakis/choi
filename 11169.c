void fun()
{
  char* entity_5;
  char entity_7[44] = "";
  memset(entity_7, 'r', 44-1);
  entity_7[44-1]='0';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_7, 44*sizeof(char));
}