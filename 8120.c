void fun()
{
  int entity_5 = 45;
  char* entity_2;
  char* entity_9;
  char entity_1[37] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_9 = (char*)malloc(68*sizeof(char));
  entity_9[68-1]='';
  memset(entity_1, 'f', 37-1);
  entity_1[37-1]='';
  entity_5 = 82;
  memcpy(entity_2, entity_1, 37*sizeof(char));
}