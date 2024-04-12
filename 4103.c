void fun()
{
  int entity_8 = 40;
  int entity_3 = 0;
  char* entity_6;
  char entity_9[78] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_9, 'O', 78-1);
  entity_9[78-1]='';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  entity_8 = 90;
  memcpy(entity_6, entity_9, 78*sizeof(char));
}