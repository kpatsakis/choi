void fun()
{
  int entity_0 = 72;
  int entity_2 = 59;
  char entity_9 = 'j';
  char* entity_8;
  char entity_3[16] = "";
  entity_3 = NULL;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_3, 'N', 16-1);
  entity_3[16-1]='';
  memset(entity_7, 'o', entity_2-1);
  entity_7[entity_2-1]='';
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  entity_2 = 61;
  strcpy(entity_8, entity_7);
}