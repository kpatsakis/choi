void fun()
{
  int entity_1 = 68;
  int entity_4 = 70;
  char entity_7[71] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_9 = 'Z';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_7, 'Y', 71-1);
  entity_7[71-1]='';
  memcpy(entity_2, entity_7, 71*sizeof(char));
}