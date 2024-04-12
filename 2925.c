void fun()
{
  int entity_5 = 6;
  char* entity_4;
  char* entity_2;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[70-1]='';
  memset(entity_3, 'r', entity_5-1);
  entity_3[entity_5-1]='';
  entity_2 = (char*)malloc(45*sizeof(char));
  entity_2[45-1]='';
  entity_5 = 11;
  memcpy(entity_4, entity_3, entity_5*sizeof(char));
}