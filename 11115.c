void fun()
{
  int entity_6 = 40;
  char* entity_0;
  char* entity_2;
  char entity_9[13] = "";
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[0]='0';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'j', 13-1);
  entity_9[13-1]='0';
  memcpy(entity_0, entity_9, 13*sizeof(char));
}