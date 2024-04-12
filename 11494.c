void fun()
{
  char* entity_9;
  char entity_3[94] = "";
  memset(entity_3, 'w', 94-1);
  entity_3[94-1]='0';
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 94*sizeof(char));
}