void fun()
{
  int entity_3 = 66;
  char* entity_4;
  char entity_7[88] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[45-1]='';
  memset(entity_7, 'Z', 88-1);
  entity_7[88-1]='';
  memcpy(entity_9, entity_7, 88*sizeof(char));
}