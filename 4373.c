void fun()
{
  int entity_2 = 45;
  char entity_9[59] = "";
  entity_9 = NULL;
  char entity_1 = 'o';
  char* entity_6;
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  memset(entity_9, 's', 59-1);
  entity_9[59-1]='';
  memcpy(entity_6, entity_9, 59*sizeof(char));
}