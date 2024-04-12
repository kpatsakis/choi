void fun()
{
  int entity_6 = 8;
  entity_6 = 100;
  char* entity_2;
  char entity_8[30] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_4 = 'W';
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[18-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_8, 'W', 30-1);
  entity_8[30-1]='';
  memcpy(entity_2, entity_8, 30*sizeof(char));
}