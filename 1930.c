void fun()
{
  int entity_6 = 70;
  int entity_1 = 59;
  char entity_3[78] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  memset(entity_3, 'I', 78-1);
  entity_3[78-1]='';
  memcpy(entity_5, entity_3, 78*sizeof(char));
}