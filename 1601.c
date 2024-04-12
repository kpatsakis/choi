void fun()
{
  int entity_2 = 12;
  entity_2 = 32;
  char entity_7[18] = "";
  entity_7 = NULL;
  char* entity_6;
  char* entity_9;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_7, 'j', 18-1);
  entity_7[18-1]='';
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[99-1]='';
  memcpy(entity_6, entity_7, 18*sizeof(char));
}