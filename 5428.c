void fun()
{
  int entity_9 = 93;
  char entity_4[48] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_8;
  memset(entity_4, 'o', 48-1);
  entity_4[48-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  entity_6 = (char*)malloc(14*sizeof(char));
  entity_6[14-1]='';
  memcpy(entity_8, entity_4, 48*sizeof(char));
}