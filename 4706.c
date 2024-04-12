void fun()
{
  int entity_5 = 82;
  entity_5 = 91;
  char entity_6 = 'e';
  char* entity_9;
  char entity_2[16] = "";
  entity_2 = NULL;
  char entity_4 = 'J';
  memset(entity_2, 'F', 16-1);
  entity_2[16-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memcpy(entity_9, entity_2, 16*sizeof(char));
}