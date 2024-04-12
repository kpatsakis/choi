void fun()
{
  int entity_7 = 88;
  char* entity_3;
  char entity_9[68] = "";
  memset(entity_9, 'e', 68-1);
  entity_9[68-1]='0';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, 68*sizeof(char));
}