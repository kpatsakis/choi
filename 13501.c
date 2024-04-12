void fun()
{
  int entity_6 = 95;
  int entity_0 = 57;
  entity_6 = 30;
  char entity_3[98] = "";
  char* entity_7;
  char entity_9[10] = "";
  memset(entity_3, 'Q', 98-1);
  entity_3[98-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'I', 10-1);
  entity_9[10-1]='0';
  memcpy(entity_7, entity_9, 10*sizeof(char));
}