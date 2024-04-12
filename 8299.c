void fun()
{
  int entity_7 = 25;
  entity_7 = 60;
  char entity_6 = 'q';
  char entity_1[75] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memset(entity_1, 'f', 75-1);
  entity_1[75-1]='';
  memcpy(entity_2, entity_1, 75*sizeof(char));
}