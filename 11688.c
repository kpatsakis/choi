void fun()
{
  char entity_1[90] = "";
  char* entity_9;
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'p', 90-1);
  entity_1[90-1]='0';
  memcpy(entity_9, entity_1, 90*sizeof(char));
}