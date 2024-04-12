void fun()
{
  int entity_9 = 70;
  int entity_6 = 19;
  entity_6 = 88;
  char* entity_7;
  char entity_4[100] = "";
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'D', 100-1);
  entity_4[100-1]='0';
  memcpy(entity_7, entity_4, 100*sizeof(char));
}