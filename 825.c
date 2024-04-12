void fun()
{
  int entity_1 = 76;
  int entity_2 = 3;
  entity_2 = 50;
  char* entity_5;
  char* entity_7;
  char entity_4[11] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', 11-1);
  entity_4[11-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  memcpy(entity_5, entity_4, 11*sizeof(char));
}