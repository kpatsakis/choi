void fun()
{
  int entity_0 = 45;
  char entity_2[31] = "";
  entity_2 = NULL;
  char* entity_8;
  char* entity_4;
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  memset(entity_2, 'S', 31-1);
  entity_2[31-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_0 = 59;
  memcpy(entity_8, entity_2, 31*sizeof(char));
}