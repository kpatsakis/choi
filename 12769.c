void fun()
{
  int entity_6 = 80;
  char* entity_2;
  char entity_7 = 'V';
  char* entity_0;
  char entity_9[59] = "";
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'p', 59-1);
  entity_9[59-1]='0';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, 59*sizeof(char));
}