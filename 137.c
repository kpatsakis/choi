void fun()
{
  int entity_0 = 31;
  char* entity_5;
  char entity_8[22] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_8, 'l', 22-1);
  entity_8[22-1]='';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  entity_0 = 94;
  memcpy(entity_7, entity_8, 22*sizeof(char));
}