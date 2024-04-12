void fun()
{
  char entity_7[62] = "";
  char* entity_5;
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'Q', 62-1);
  entity_7[62-1]='0';
  memcpy(entity_5, entity_7, 62*sizeof(char));
}