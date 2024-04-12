void fun()
{
  char entity_4[84] = "";
  char* entity_9;
  memset(entity_4, 's', 84-1);
  entity_4[84-1]='0';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_4, 84*sizeof(char));
}