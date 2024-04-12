void fun()
{
  char* entity_9;
  char entity_3[61] = "";
  memset(entity_3, 's', 61-1);
  entity_3[61-1]='0';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 61*sizeof(char));
}