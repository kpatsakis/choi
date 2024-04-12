void fun()
{
  int entity_6 = 75;
  int entity_4 = 88;
  char* entity_9;
  char entity_1 = 'l';
  char* entity_7;
  char entity_3[26] = "";
  entity_3 = NULL;
  memset(entity_3, 'S', 26-1);
  entity_3[26-1]='';
  entity_7 = (char*)malloc(48*sizeof(char));
  entity_7[48-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memcpy(entity_9, entity_3, 26*sizeof(char));
}